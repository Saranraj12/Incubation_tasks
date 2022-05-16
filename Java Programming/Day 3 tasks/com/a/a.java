package com.a;

public class a {
	protected void run() {
		System.out.println("Protected Method Running in com.a ");
	}
	public void show() {
		System.out.println("Public method In show.");
	}
	void display() {
		System.out.println("in display");
		// restrict();
	}
	private void restrict() {
		System.out.println("In restricted");
	}
	// restrict();
}
