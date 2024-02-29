mport java.util.*;
public class StudentCon
{
    public
        String collegeName;
        int collegeCode;
        String fullName;
        double semPercentage;

    public
        StudentCon()
        {
            String collegeName = "MVGR";
            int collegeCode = 33;
            System.out.println("College Code : " + collegeName);
            System.out.println("College Code : " + collegeCode);
        }
        StudentCon(String fullName, double semPercentage)
        {
            System.out.println("Full Name : " + fullName);
            System.out.println("Sem Percentage : " + semPercentage);
        }

        public void finalize()
        {
            System.out.println("I am Dead!!..");
        }

        public static void main(String[] args)
        {
            StudentCon s = new StudentCon();
            StudentCon s1 = new StudentCon("Bhoomika", 9.25);
            s.finalize();
            s1.finalize();
        }
