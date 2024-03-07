class AccessSpecifier{
    private int priVar;
    protected int proVar;
    public int pubVar;
    public void setVar(int priValue ,int proValue ,int pubValue)
    {
        priVar=priValue;
        proVar=proValue;
        pubVar=pubValue;

    }
    public void getVar(){
        System.out.println("private : " +priVar);
        System.out.println("protected : " +proVar);
        System.out.println("public : " +pubVar);


    }
}

public class AccessSpecifierDemo{ 
    public static void main(String[] args){
        AccessSpecifier Demoobj=new AccessSpecifier();
        Demoobj.setVar(10,30,40);
        Demoobj.getVar();

    }

}

    
    





