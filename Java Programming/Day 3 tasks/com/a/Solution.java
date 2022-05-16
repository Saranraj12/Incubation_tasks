package com.a;
import java.util.*;
public class Solution {
	public static void checker(String a,String b,int v){
        int i = 0,j =0;
        if(b.length() < a.length()){
            System.out.println("Case #"+v+": "+"IMPOSSIBLE");
            return;
        }
        while(i < a.length() && j < b.length()){
            if(a.charAt(i) == b.charAt(j)){
                i++;
            }
            j++;
        }
        if(i == a.length()){
            int del = b.length() - a.length();
            System.out.println("Case #"+v+": "+del);
        }
        else{
            System.out.println("Case #"+v+": "+"IMPOSSIBLE");
        }
        
    }
    
	public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0;i < n;i++){
            String a = sc.next();
            String b = sc.next();
            checker(a,b,i+1);
        }
        
		
		
	    
	}

}
