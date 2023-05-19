#modules to be used
import pygame
import random
import math
from pygame import mixer
###################################################################################
#initialise pygame
pygame.init()
#window screen
screen = pygame.display.set_mode((800 , 600))
background = pygame.image.load("space.png")
#background music
mixer.music.load("background.wav")
mixer.music.play(-1)
#window title and icon
pygame.display.set_caption("-->SPACE ARCADE<--")
icon = pygame.image.load("UFO.png")
pygame.display.set_icon(icon)
live_over = True
show_score = True
count = 0
fps = 60
clock = pygame.time.Clock()
####################################################################################
# main player
player_image = pygame.image.load("spaceship.png")
player_x = 400
player_y = 480
player_x_change = 0
# enemy
enemy_image =[]
enemy_x =[]
enemy_y =[]
enemy_x_change =[]
enemy_y_change =[]
num=6
for i in range (num):
    enemy_image.append(pygame.image.load("enemy.png"))
    enemy_x.append(random.randint(0,735))
    enemy_y.append(random.randint(50,150))
    enemy_x_change.append(10)
    enemy_y_change.append(40)
# bullet
bullet_image = pygame.image.load("bullet.png")
bullet_x = 0
bullet_y = 480
bullet_x_change = 0
bullet_y_change = 20
bullet_state = "ready"
#score
score_value = 0
font = pygame.font.Font("freesansbold.ttf",32)
textx = 10
texty = 10
#game over and win font
over_font = pygame.font.Font("freesansbold.ttf",64)
over = pygame.font.Font("freesansbold.ttf",64)
live = pygame.font.Font("freesansbold.ttf",32)

#############################################################################################
def show_lives():
    show_lives = live.render("LIVES:"+ str (4 - count),True,(255,0,0))
    screen.blit(show_lives,(670,10))

def win():
    good = over.render("YOU WON",True,(255,0,0))
    screen.blit(good,(200,250))

def show_score(x,y):
    global sh
    if show_score:
        score = font.render("SCORE :" + str (score_value),True,(255,0,0))
        screen.blit(score,(x,y))

def game_over():
    gameover = over_font.render("GAME OVER", True, (255, 0, 0))
    screen.blit(gameover, (200, 250))
    s = over_font.render("YOUR SCORE IS "+ str (score_value),True,(0,0,255))
    screen.blit(s,(100,200))

def show():
    global screen,run
    title = pygame.image.load("logo.png")
    screen.blit(title, (200, 100))
    pygame.display.update()
    while True:
        ev = pygame.event.poll()
        if ev.type == pygame.KEYDOWN:
            if ev.key == pygame.K_RETURN:
                run = True
            elif ev.key == pygame.K_q:
                pygame.quit()
                quit()
        else:
            draw_text(screen, "Press [ENTER] To Begin", 30, 400, 300)
            draw_text(screen, "or [Q] To Quit", 30, 400, 300 + 40)
            pygame.display.update()
    screen.fill((0, 0, 0))
    pygame.display.update()

def player(x,y):
    screen.blit(player_image,(x,y))

def enemy(x,y,i):
    screen.blit(enemy_image[i],(x,y))

def bullet(x,y):
    global bullet_state
    bullet_state = "fire"
    screen.blit(bullet_image,(x+16,y+10))

def iscollision(bullet_x,bullet_y,enemy_x,enemy_y):
    distance=(math.sqrt(math.pow((bullet_x-enemy_x),2) + math.pow((bullet_y-enemy_y),2)))
    if distance < 27:
        return True
    else:
        return False

def main_menu():
    global screen
    title = pygame.image.load("logo.png")
    screen.blit(title, (200,100))
    pygame.display.update()
    while True:
        ev = pygame.event.poll()
        if ev.type == pygame.KEYDOWN:
            if ev.key == pygame.K_RETURN:
                break
            elif ev.key == pygame.K_q:
                pygame.quit()
                quit()
        else:
            draw_text(screen, "Press [ENTER] To Begin", 30, 400, 300)
            draw_text(screen, "or [Q] To Quit", 30, 400, 300+40)
            pygame.display.update()
    screen.fill((0,0,0))
    pygame.display.update()

def endgame():
    global run
    while True:
        ev = pygame.event.poll()
        if ev.type == pygame.KEYDOWN:
            if ev.key == pygame.K_RETURN:
                main_menu()
                run = True
            elif ev.key == pygame.K_q:
                pygame.quit()
                quit()
        else:
            draw_text(screen, "Press [ENTER] To Go to main menu", 30, 400, 300)
            draw_text(screen, "or [Q] To Quit", 30, 400, 300 + 40)
        pygame.display.update()

def draw_text(surf, text, size, x, y):
    font = pygame.font.Font("freesansbold.ttf", size)
    text_surface = font.render(text, True, (0,0,255))
    text_rect = text_surface.get_rect()
    text_rect.midtop = (x, y)
    surf.blit(text_surface, text_rect)

def lives():
    global count
    for i in range(num):
        if enemy_y[i] > 472:
            count = count + 1
            print(count)
            for i in range(num):
                enemy_x[i] = random.randint(0, 735)
                enemy_y[i] = random.randint(50, 114)
def kill():
    global live_over
    global show_score
    if count > 3:
        for j in range(num):
            enemy_x[j] = -2000
        game_over()
        live_over = False
        show_score = False
        # show()

#######################################################################################3
#main loop
run = True
menu_display = True
while run:
    #screen.fill((255,0,0))
    screen.blit(background,(0,0))
    if menu_display:
        main_menu()
        get_ready = over.render("GET READY",True,(0,0,255))
        screen.blit(get_ready,(200,300))
        pygame.display.update()
        sound = mixer.Sound("getready.ogg")
        sound.play()
        pygame.time.wait(1000)
        pygame.display.update()
        menu_display = False

    clock.tick(fps)
    for event in  pygame.event.get():
        if event.type == pygame.QUIT:
            run = False

        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_LEFT:
                player_x_change = -5
            if event.key == pygame.K_RIGHT:
                player_x_change = 5
            if event.key == pygame.K_SPACE:
                bullet_sound = mixer.Sound("laser.wav")
                bullet_sound.play()
                if bullet_state is "ready":
                    bullet_x = player_x
                    bullet (bullet_x,bullet_y)

        if event.type == pygame.KEYUP:
            if event.key == pygame.K_LEFT or event.key == pygame.K_RIGHT :
                player_x_change = 0
    #to make borders for the player
    player_x = player_x + player_x_change
    if player_x >= 736:
        player_x = 736
    elif player_x <= 0:
        player_x = 0

    for i in range(num):
        if live_over:
            lives()
        kill()

        enemy_x[i] = enemy_x[i] + enemy_x_change[i]
        if enemy_x[i] >= 736:
            enemy_x_change[i] = -10
            enemy_y[i] += 64
        elif enemy_x[i] <= 0:
            enemy_x_change[i] = 10
            enemy_y[i] += 64
        collision = iscollision(bullet_x, bullet_y, enemy_x[i], enemy_y[i])
        if collision == True:
            collision_sound = mixer.Sound("explosion.wav")
            collision_sound.play()
            bullet_y = 480
            bullet_state = "ready"
            score_value += 10
            enemy_x[i] = random.randint(0, 735)
            enemy_y[i] = random.randint(50, 114)
        enemy(enemy_x[i], enemy_y[i], i)
    if bullet_y <=0:
        bullet_y = 480
        bullet_state = "ready"
    if bullet_state is "fire":
        bullet(bullet_x,bullet_y)
        bullet_y -= bullet_y_change
    if live_over:
        show_lives()
    if show_score:
        show_score(textx, texty)
    player(player_x,player_y)
    pygame.display.update()