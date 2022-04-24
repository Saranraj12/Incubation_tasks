// Yes We can prevent overriding by use of final keyword!!

class Student{
	float mark1= 89.0f,mark2= 84.0f,mark3= 86.0f,mark4= 87.0f,mark5= 88.0f;
	final float calculateAverage() {
		float average;
		average = (mark1+mark2+mark3+mark4+mark5)/5.0f;
		return average;
	}
}
class Teacher extends Student{
	/*float calculateAverage() {
		float average;
		average = (mark1+mark2+mark3+mark4+mark5)/5.0f;
		return average;
	}*/
}

public class PreventOverriding {
	
	public static void main(String[] args) {
		
		Teacher teacher = new Teacher();
		System.out.println(teacher.calculateAverage());
		
	}

}
