import java.util.Scanner;
class student018
{
public
String fullName;
int rollNum;
double semPercentage;
String collegeName;
int collegeCode;
student018()
{
System.out.println("Student class is created successfully!!\nIam a student\n");
}
protected void finalize() throws Throwable
{
System.out.println("The class is finalized\n");
}
}

public class student
{
public static void main(String[] args)
{
student018 Bhoomika=new student018();;
Scanner input=new Scanner(System.in);
System.out.print("Enter your sweet name : ");
Bhoomika.fullName=input.nextLine();
System.out.print("Enter your rollNumber : ");
Bhoomika.rollNum=input.nextInt();
System.out.print("Enter your semPercentage : ");
Bhoomika.semPercentage=input.nextDouble();
input.nextLine();
System.out.print("Enter your collegeName : ");
Bhoomika.collegeName=input.nextLine();
System.out.print("Enter your collegeCode : ");
Bhoomika.collegeCode=input.nextInt();
System.out.print("Name : "+Bhoomika.fullName+"\n");
System.out.print("RollNumber : "+Bhoomika.rollNum+"\n");
System.out.print("SemPercentage : "+Bhoomika.semPercentage+"\n");
System.out.print("CollegeName : "+Bhoomika.collegeName+"\n");
System.out.print("CollegeCode : "+Bhoomika.collegeCode+"\n");
input.close();
}
}
