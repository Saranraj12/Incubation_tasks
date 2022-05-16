package com.a;

public class FindString {
	
	static void setValue(String str,char[][] array,int size) {
		int k = 0;
		for(int i = 0;i < size;i++) {
			for(int j = 0;j < size;j++){
				array[i][j] = str.charAt(k++);
				if(k == str.length()) {
					break;
				}
			}
			if(k == str.length())
				break;
		}
	}
	static void printValue(int size,char[][] array) {

		for(int i = 0;i < size;i++) {
			for(int j = 0;j < size;j++){
				System.out.print(array[i][j]+" ");
			}System.out.println();
		}
	}

	public static void main(String[] args) {
		String str = "WELCOMETOZOHOCORPORATION";
		int length = str.length();
		int arrSize = (int)Math.ceil(Math.sqrt(length));
		char array[][] = new char[arrSize][arrSize];
		setValue(str,array,arrSize);
		printValue(arrSize,array);
	}
	static void checkString(String str, char[][] array) {
		for(int i = 0;i < array.length;i++) {
			for(int j = 0;j < array[i].length;i++) {
				if(array[i][j] == str.charAt(0)) {
					if(array[i-1][j] == str.charAt(1)) {
						
					}
					else if(array[i+1][j] == str.charAt(1)) {
						
					}
					else if(array[i][j-1] == str.charAt(1)) {
						
					}
					else if(array[i][j+1] == str.charAt(1)) {
						
					}
				}
			}
		}
	}

}
