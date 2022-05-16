/*
*Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a method named 'Area' which 
returns the area and length and breadth passed as parameters to its constructor..
*/
import java.util.*;

class Area{

   void area(int l,int b){
	float area = l*b;
    	System.out.println("Area of the rectangle : "+area);
   }
   void area(double l,double b){
	float area = l*b;
    	System.out.println("Area of the rectangle : "+area);
   }

}
class Square extends Area{
  
    void area(int n){
    	System.out.println("Area of the Square :"+(n*n));
    }
    void area(double n){
        System.out.println("Area of the Square :"+(n*n));
    }
}

class Triangle extends Area{
  final float half = 0.5f;
   void area(int l,int b){
	float area = l*b*half;
    	System.out.println("Area of the Triangle : "+area);
   }
   void area(double l,double b){
	double area = l*b*half;
    	System.out.println("Area of the Triangle : "+area);
   }
}
class Rectangle{
   public static void main(String args[]){
	Area s = new Area();
	s.area(8,7);
	s.area(7.2,5.6);
	Square sqr = new Square();
	sqr.area(4);
	sqr.area(4.5);
	Triangle tr1 = new Triangle();
	tr1.area(7.2,5.6);
	tr1.area(8,7);
   }
}