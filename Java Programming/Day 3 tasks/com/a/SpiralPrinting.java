package com.a;

public class SpiralPrinting {

	public static void main(String[] args) {
		int arr[][] = {
						{1,2,3,4},
						{5,6,7,8},
						{9,10,11,12},
						{13,14,15,16}
		};
		int rStart = 0, rEnd = arr.length - 1, cStart = 0,cEnd = arr[0].length - 1;
		while(rStart < rEnd && cStart < cEnd)
		{
			for(int i = cStart;i <= cEnd;i++) {
				System.out.print(arr[rStart][i] + " ");
			}
			rStart++;
			
			for(int i = rStart;i <= rEnd;i++) {
				System.out.print(arr[i][cEnd] + " ");
			}
			cEnd--;
			
			for(int i = cEnd;i >= cStart;i--) {
				System.out.print(arr[rEnd][i] + " ");
			}
			rEnd--;
			
			for(int i = rEnd;i >= rStart;i--) {
				System.out.print(arr[i][cStart] + " ");
			}
			cStart++;
		}

	}

}
