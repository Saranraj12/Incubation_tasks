package com.a;


public class RotateMatrix
{

	public static void main(String[] args) {
	int arr[][] = {{1,2,3,10},{4,5,6,11},{7,8,9,12},{13,14,15,16}};
	int m = arr.length;
	int n = arr[0].length;
	rotatematrix(m,n,arr);
	}

	static void rotatematrix(int m, int n, int[][] arr) {
		for(int i = 0;i < m;i++){
			for(int j = 0;j < n;j++){
				if(i < j) {
					int temp = arr[i][j];
					arr[i][j] = arr[j][i];
					arr[j][i] = temp;
				}
				
			}
		}

		for(int c = 0;c < m;c++) {
			for(int k = 0;k < n/2;k++) {
				int temp = arr[c][k];
				arr[c][k] = arr[c][n-k-1];
				arr[c][n-k-1] = temp;
				
			}
		}
		for(int i = 0;i < m;i++){
			for(int j = 0;j < n;j++){
				System.out.print(arr[i][j]+" ");
				
			}System.out.println();
		}
		
		
	}
}

