import java.util.Scanner;

class CompEng{
    Scanner sc = new Scanner(System.in);
    String name;
    int rollno;
    int grno;
    String hobby;

    public void getName() {
        System.out.println("Enter Name of Student :");
        name = sc.nextLine();

    }

    public void getRollno() {
        System.out.println("Enter Roll no of Student :");
        rollno = sc.nextInt();

    }

    public void getGrno() {
        System.out.println("Enter Gr no of Student :");
        grno = sc.nextInt();

    }

    public void getHobby() {
        System.out.println("Enter Hobbies of Student : ");
        
        hobby = sc.nextLine();

    }

    void out(){
        System.out.println("NAME of the Student is : " + name);
        System.out.println("Roll no of Student is :" + rollno);
        System.out.println("GR no of student is :" + grno);
        System.out.println("Hobby of Student is :" + hobby);
    }
}

class STUDENT extends CompEng {
    Scanner ss = new Scanner(System.in);
    int marks;
    String Area_of_Interest;

    public void getMarks() {
        System.out.println("Enter Marks of Student :");
        marks = ss.nextInt();

    }

    public void getArea_of_Interest() {
        System.out.println("Enter Area of Interest of Student :");
        
        Area_of_Interest = ss.nextLine();

    }

    void display(){
        System.out.println("MARKS of the Student is :" + marks);
        System.out.println("Area of interest of student is :" + Area_of_Interest);
    }
    public static void main(String[] args) {
        STUDENT s1 = new STUDENT();
        s1.getName();
        s1.getRollno();
        s1.getGrno();
        s1.getHobby();
        s1.getMarks();
        s1.getArea_of_Interest();
        s1.out();
        s1.display();
    }
}
