
import java.util.Scanner;

class CompEng{
    Scanner sc = new Scanner(System.in);
    String name;
    int rolno;
    int grno;
    String hobby;

    public String getName() {
        System.out.println("Enter Name of Student :");
        name = sc.nextLine();
        return name;
    }

    public int getRolno() {
        System.out.println("Enter Roll no of Student :");
        rolno = sc.nextInt();
        return rolno;
    }

    public int getGrno() {
        System.out.println("Enter Gr no of Student :");
        grno = sc.nextInt();
        return grno;
    }

    public String getHobby() {
        System.out.print("Enter Hobbies of Student : ");
        System.out.println("basketball");
//        System.out.println("\n");
        hobby = "basketball";
        return hobby;
    }

    void out(){
        System.out.println("NAME of the Student is : " + name);
        System.out.println("Roll no of Student is :" + rolno);
        System.out.println("GR no of student is :" + grno);
        System.out.println("Hobby of Student is :" + hobby);
    }
}

class student extends CompEng {
    Scanner ss = new Scanner(System.in);
    int marks;
    String Area_of_Interest;

    public int getMarks() {
        System.out.println("Enter Marks of Student :");
        marks = ss.nextInt();
        return marks;
    }

    public String getArea_of_Interest() {
        System.out.println("Enter Area of Interest of Student :");
        System.out.print("Reading");
        Area_of_Interest = "Reading";
        return Area_of_Interest;
    }

    void display(){
        System.out.println("MARKS of the Student is :" + marks);
        System.out.println("Area of interest of student is :" + Area_of_Interest);
    }
    public static void main(String[] args) {
        student s1 = new student();
        s1.getName();
        s1.getRolno();
        s1.getGrno();
        s1.getHobby();
        s1.getMarks();
        s1.getArea_of_Interest();
        s1.out();
        s1.display();
    }
}
