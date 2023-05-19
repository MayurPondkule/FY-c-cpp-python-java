//Paraconstructor(int s)
//Paraconstructor(int b)
//can`t use because constructor(int s) already used in class constructor


public class Paraconstructor {


    Paraconstructor(){

        System.out.println("pqr");
    }


    
    Paraconstructor(int a){
        int season=a;

        System.out.println("here is aot fan "+ a);
    }
    
    Paraconstructor(String s){

        String season=s;

        System.out.println("here is got fan "+s);
    }

    Paraconstructor(int i,String s){
        int roll=i;
        String name=s;
        System.out.println("roll no is "+roll+" name is"+name);
    }

    public static void main(String[] args) {
        Paraconstructor obj =new Paraconstructor(20,"abc");
        Paraconstructor obj1 =new Paraconstructor();
        Paraconstructor obj2 =new Paraconstructor(4);
        Paraconstructor obj3 =new Paraconstructor("four");

        
    }



    
}
