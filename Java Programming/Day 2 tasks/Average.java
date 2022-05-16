/*
Print the average of three numbers entered by user by creating a class 
named 'Average' having a method to calculate and print the average.
*/

import java.util.*;
public class Average{
  float calculate(){
	Scanner sc = new Scanner(System.in);
	float sum = 0.0f;
        for(int i = 0;i < 3;i++){
            System.out.println("Enter the number "+(i+1)+": ");
	    sum += sc.nextFloat();
        } 
	return sum/3;
  }
  public static void main(String args[]){
	Average a = new Average();
	System.out.println(a.calculate());
}
}