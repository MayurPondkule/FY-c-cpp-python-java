//With operator
class Covid {
    int id;
    int dob;
    long tel;
    long aadhar;
    String bg;
    String testreport;
    String add;
    Covid(){
        id = 3045;
        dob = 7122001;
        tel = 9876543211L;
        aadhar = 897654321123L;
        bg = "A";
        testreport = "Positive";
        add = "Pune";
    }
    public void display(){
        System.out.println("ID of the Paitent is " + id);
        System.out.println("Date of Birth is :" + dob);
        System.out.println("Telephone number is :" + tel);
        System.out.println("Aadhar number is :" + aadhar);
        System.out.println("Blood group is :"+ bg);
        System.out.println("TEST REPORT :"+testreport);
        System.out.println("Address :"+ add);
    }

    public static void main(String[] args) {
        Covid c1 = new Covid();
        c1.display();
    }

}
//Overloading
class ocovid {
    String name;
    int id;
    int dob;
    long tel;
    long aadhar;
    String bg;
    String testreport;
    String add;
    ocovid(){
        id = 304;
        dob = 7122001;
        tel = 9876543211L;
        aadhar = 897654321123L;
        bg = "B";
        testreport = "Positive";
        add = "Baramati";
    }
    ocovid(int a, int b, int c,long x,String d,String z,String y){
        id = a;
        dob = b;
        tel = c;
        aadhar = x;
        bg = d;
        testreport = z;
        add= y;
    }

    public void display(){
        System.out.println("name of the Paitent is " + name);
        System.out.println("ID of the Paitent is " + id);
        System.out.println("Date of Birth is :" + dob);
        System.out.println("Telephone number is :" + tel);
        System.out.println("Aadhar number is :" + aadhar);
        System.out.println("Blood group is :"+ bg);
        System.out.println("TEST REPORT :"+testreport);
        System.out.println("Address :"+ add);
        System.out.println("\n");
    }

    public static void main(String[] args) {
        ocovid c1 = new ocovid();
        ocovid c2 = new ocovid(3045,7122001,1859463785,123456712345L,"B","Negative","pune");
        c1.display();
        c2.display();
    }

}
