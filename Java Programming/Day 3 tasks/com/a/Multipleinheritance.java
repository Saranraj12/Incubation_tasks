package com.a;

interface write{
	void dowrite(String s);
}

interface print{
	String prints();
}

public class Multipleinheritance implements write,print {
	String something;
	public void dowrite(String content) {
		this.something =  content;
	}
	public String prints() {
		return something;
	}
	public static void main(String[] args) {
		
		Multipleinheritance mi = new Multipleinheritance();
		mi.dowrite("Java Programming");
		System.out.println(mi.prints());
	}

}
