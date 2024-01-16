//   Program524
import java.util.*;

public class Lb260723_01
{
    public static void main(String Agrs[])
    {
      Student sobj1 = new Student(1,"Amit", 23, 89);
      Student sobj2 = new Student(2,"Sagar", 24, 91);
     
      sobj1.Display();
      sobj2.Display();

    }
}
 
class Student
{
    // Columns of tables

    public int RollNo;
    public String Name;
    public int Age;
    public int Marks; 

    public Student(int no, String str, int x, int y)
    {
        this.RollNo = no;
        this.Name = str;
        this.Age = x;
        this.Marks = y;
    }
    public void Display()
    {
        System.out.println(this.RollNo +" "+this.Name+" "+this.Age+" "+this.Marks);
    }
}