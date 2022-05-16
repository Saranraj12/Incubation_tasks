package com.a;

abstract class A{
	public abstract void method();
	public void print() {
		System.out.println("In abstract method printing...");
	}
}

public class AbstractImp extends A{
	public void method() {
		System.out.println("In method");
	}

	public static void main(String[] args) {
		
		AbstractImp a = new AbstractImp();
		a.method();
		a.print();

	}

}
