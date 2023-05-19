// public class Main12 {
    
// }
import java.util.Scanner;

class Computer_Engg{
    Scanner sc=new Scanner(System.in);
    String name;
    int roll_no;
    int GR;
    String hobby;

    void getGR(){
        System.out.println("GR_Number is 2201067");
        GR=sc.nextInt();

    }
    void getname(){
        System.out.println("name is mayur");
        name=sc.nextLine();
    }

    void getroll_no(){
        System.out.println("roll no is 45");
        roll_no=sc.nextInt();
    }

    void gethobbies(){
        System.out.println("hobbie is playing cricket");
        hobby=sc.nextLine();

    }

    void out(){
        System.out.println("NAME of the Student is : " + name);
        System.out.println("Roll no of Student is :" + roll_no);
        System.out.println("GR no of student is :" + GR);
        System.out.println("Hobby of Student is :" + hobby);
    }
}

class Student extends Computer_Engg {
    Scanner s = new Scanner(System.in);

    int marks;
    String Area_of_Interest;

    public void getmarks() {
        System.out.println("enter marks of student");
        marks = s.nextInt();
    }

    public void getArea_of_Interest() {
        System.out.println("enter area of interest is ");
        Area_of_Interest = s.nextLine();
    }


    void display() {
        System.out.println("MARKS of the Student is :" + marks);
        System.out.println("Area of interest of student is :" + Area_of_Interest);
    }


    public static void main(String[] args) {

        Student std1 = new Student();
        std1.getGR();
        std1.getname();
        std1.getroll_no();
        std1.gethobbies();
        std1.getArea_of_Interest();
        std1.getmarks();
        std1.out();
        std1.display();

    }
}
