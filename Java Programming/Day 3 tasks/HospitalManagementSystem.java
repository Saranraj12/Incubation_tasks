import java.util.Scanner;

class Doctor extends Patient{
	static int id = 500;
	int doctorId = ++id;
	private String Name,pass; 
	private int Age;
	private char gender;
	
	@Override
	public String toString() {
		return "Doctor [doctorId=" + doctorId + ", Name=" + Name + ", Age=" + Age + ", gender=" + gender + "]";
	}
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public void setPass(String name) {
		pass = name;
	}
	public String getPass() {
		return pass;
	}
	public int getAge() {
		return Age;
	}
	public void setAge(int age) {
		Age = age;
	}
	public char getGender() {
		return gender;
	}
	public void setGender(char gender) {
		this.gender = gender;
	}
	
}

class Patient{
	static int id1 = 1000;
	int patientId = ++id1;
	private String Name,pass;
	private String status = "Not yet reviewed";
	private int Age;
	private char gender;
	
	@Override
	public String toString() {
		return "Patient [patientId=" + patientId + ", Name=" + Name + ", status=" + status + ", Age=" + Age
				+ ", gender=" + gender + "]";
	}
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public void setPass(String name) {
		pass = name;
	}
	public String getPass() {
		return pass;
	}
	public int getAge() {
		return Age;
	}
	public void setAge(int age) {
		Age = age;
	}
	public char getGender() {
		return gender;
	}
	public void setGender(char gender) {
		this.gender = gender;
	}
	public String getStatus() {
		return status;
	}
	public void setStatus(String status) {
		this.status = status;
	}
}


public class HospitalManagementSystem extends Doctor{
	
	static Patient patients[] = new Patient[10];
	static Doctor doctor[] = new Doctor[3];
	static int doctorCount = 0,patientsCount = 0;
	static Scanner sc = new Scanner(System.in);
	static String adminName = "admin";
	static String adminPass = "password";
	static void login() {
		int choice;
		while(true) {
			System.out.println("# # # # # LOGIN PAGE # # # # # #");
			System.out.println("[1] ADMIN LOGIN\n[2] DOCTOR LOGIN\n[3] PATIENT LOGIN\n[4] EXIT");
			System.out.println("Enter your Choice");
			choice = sc.nextInt();
			switch(choice) {
			case 1: adminLogin();
					break;
			case 2: doctorLogin();
					break;
			case 3: patientLogin();
					break;
			case 4: System.exit(0);
			default: System.out.println("Invalid Choice !!!");
			}
		}
		
	}
	private static void patientLogin() {
		String name,pass;
		System.out.println("Enter the patient's user Name");
		name = sc.next();
		System.out.println("Enter the patient's password");
		pass = sc.next();
		for(int i = 0;i < patientsCount;i++) {
			if (patients[i]!= null) {
				if(patients[i].getName().equalsIgnoreCase(name) && patients[i].getPass().equalsIgnoreCase(pass)) {
					System.out.println("Patient Logged in Successfully");
					patientAccess(patients[i]);
				}
			}
		}
		
		
	}
	private static void patientAccess(Patient p) {
		System.out.println("# # # # # PATIENT ACCESS PAGE # # # # #");
		int choice;
		while(true) {
			System.out.println("[1] Details About you\n[2] To Modify\n[3] Logout\n[4] Exit");
			System.out.println("\nEnter your Choice : ");
			choice = sc.nextInt();
			switch(choice) {
				case 1: showPatientDetails(p);
						break;
				case 2: modifyDetails(p);
						break;
				case 3:login();
						break;
			}
		}
		
	}
	private static void modifyDetails(Patient p) {
		System.out.println("[1] Name\n[2] Age\n[3] Gender\n[4] exit");
		int choice = sc.nextInt();
		switch(choice) {
			case 1:System.out.println("Enter your new name");
					p.setName(sc.next());
					break;
			case 2:System.out.println("Enter your new Age");
			       p.setAge(sc.nextInt());
			       break;
			case 3:System.out.println("Enter the gender : ");
			       p.setAge(sc.next().charAt(0));
			       break;
			default: System.out.println("Invalid Choice!!!");
		}
		System.out.println("Do you want to continue change : press- '1'");
		choice = sc.nextInt();
		if(choice == 1) {
			modifyDetails(p);
		}
		else {
			patientAccess(p);
		}
		
		
	}
	static void doctorLogin() {
		String name,pass;
		name = sc.next();
		pass = sc.next();
		for(int i = 0;i < doctorCount;i++) {
			if (doctor[i]!= null) {
				if(doctor[i].getName().equalsIgnoreCase(name) && doctor[i].getPass().equalsIgnoreCase(pass)) {
					System.out.println("Doctor Logged in Successfully");
					doctorAccess();
					
				}
			}
		}
		
	}
	public static void showPatientDetails(Patient p) {
		System.out.println("$ $ $ $ $ $ $ $ $ $ $ $ $ ");
		System.out.println("ID : "+p.patientId);
		System.out.println("Name : "+p.getName());
		System.out.println("Age : "+p.getAge());
		System.out.println("Gender : "+p.getGender());
		System.out.println("Status : "+p.getStatus());
		System.out.println("$ $ $ $ $ $ $ $ $ $ $ $ $ ");
		
	}
	static void doctorAccess() {
		System.out.println("# # # # # DOCTOR ACCESS PAGE # # # # #");
		int choice;
		while(true) {
			System.out.println("[1] View patients\n[2] Patient Details\n[3] Logout\n[4] Exit");
			System.out.println("\nEnter your Choice : ");
			choice = sc.nextInt();
			switch(choice) {
				case 1: viewPatients();
						break;
				case 2: patientDetails();
						break;
				case 3:login();
						break;
				case 4:System.exit(0);
			}
		}
		
	}
	static void patientDetails() {
		System.out.println("Enter the patient ID : ");
		int id = sc.nextInt();
		int index = getPatientIndex(id);
		if(index == -1) {
			System.out.println("Entered ID is incorrect--");
			return;
		}
		showPatientDetails(patients[index]);
		System.out.println("Enter the status of this patient : ");
		patients[index].setStatus(sc.next());
		System.out.println("Status Updated Successfully");
		
	}
	static void adminLogin() {
		
		String name,pass;
		System.out.println("Enter the Admin's UserName : ");
		name = sc.next();
		System.out.println("Enter the Admin's PassWord : ");
		pass = sc.next();
		if(name.equalsIgnoreCase(adminName) && pass.equalsIgnoreCase(adminPass)) {
			System.out.println("Hello "+name+" !!");
			adminAccess();
		}
		else {
			System.out.println("You don't have access for admin!!!");
			login();
		}
		
	}
	static void adminAccess() {
		int choice;
		System.out.println("# # # # # # # ADMIN PAGE # # # # # # #");
		System.out.println("\n[1] ADD A DOCTOR\n[2] DELETE DOCTOR"
				+ "\n[3] ADD A PATIENT\n[4] DELETE PATIENT\n[5] VIEW PATIENTS\n[6] VIEW DOCTORS\n[7] LOGOUT");
		choice = sc.nextInt();
		switch(choice) {
		case 1: addDoctor();
				adminAccess();
				break;
		case 2: deleteDoctor();
				adminAccess();
				break;
		case 3: addPatient();
				adminAccess();	
				break;
		case 4: deletePatient();
				adminAccess();
				break;
		case 5: viewPatients();
				adminAccess();
				break;
		case 6: viewDoctors();
				adminAccess();
				break;
		case 7: login();
				break;
		default : System.out.println("Invalid Choice!!!");
				  adminAccess();

		}
	}
	static void viewDoctors() {
		for(int i = 0;i < doctorCount;i++) {
			if(doctor[i] == null)
				continue;
			System.out.println(doctor[i].toString());
		}
		
	}
	static void viewPatients() {
		if(patientsCount == 0) {
			System.out.println("No Patients record stored");
			return;
		}
//		System.out.println("   NAME    AGE    GENDER ");
		for(int i = 0;i < patientsCount;i++) {
//			System.out.println("  " + patients[i].getName()+"   " + patients[i].getAge()+"   "+patients[i].getGender());
			if(patients[i]==null)
				continue;
			System.out.println(patients[i].toString());
		}
		
	}
	static void deletePatient() {
		System.out.println("Enter the patient ID : ");
		int id = sc.nextInt();
		int index = getPatientIndex(id);
		if (index == -1) {
			System.out.println("Patient ID not found!!!");
			return;
		}
		patients[index] = null;
		
	}
	static int getPatientIndex(int id) {
		for(int i = 0;i < patientsCount;i++) {
			if(patients[i].patientId == id) {
				return i;
			}
		}
		return -1;
	}
	static void addPatient() {
		System.out.println("# # # # # ADD A PATIENT # # # # #");
		patients[patientsCount] = new Patient();
		System.out.println("Enter the new Patient's Name :");
		patients[patientsCount].setName(sc.next());
		System.out.println("Enter the new Patient's Password :");
		patients[patientsCount].setPass(sc.next());
		System.out.println("Enter the new Patient's Age :");
		patients[patientsCount].setAge(sc.nextInt());
		System.out.println("Enter the new Patient's Gender ['M' || 'F'] :");
		patients[patientsCount].setGender(sc.next().charAt(0));
		patientsCount++;
		System.out.println("# # # # # PATIENT CREATED SUCCESSFULLY # # # # #");
		
	}
	static int getDoctorIndex(int id) {
		for(int i = 0;i < doctorCount;i++) {
			if(doctor[i].doctorId == id) {
				return i;
			}
		}
		return -1;
	}
	static void deleteDoctor() {
		System.out.println("Enter the doctor ID : ");
		int id = sc.nextInt();
		int index = getDoctorIndex(id);
		if (index == -1) {
			System.out.println("Doctor ID not found!!!");
			return;
		}
		doctor[index] = null;
	}
	static void addDoctor() {
		System.out.println("# # # # # ADD A DOCTOR # # # # #");
		doctor[doctorCount] = new Doctor();
		System.out.println("Enter the new Doctor's Name :");
		doctor[doctorCount].setName(sc.next());
		System.out.println("Enter the password for doctor :");
		doctor[doctorCount].setPass(sc.next());
		System.out.println("Enter the new Doctor's Age :");
		doctor[doctorCount].setAge(sc.nextInt());
		System.out.println("Enter the new Doctor's Gender ['M' || 'F'] :");
		doctor[doctorCount].setGender(sc.next().charAt(0));
		doctorCount++;
		System.out.println("# # # # # DOCTOR CREATED SUCCESSFULLY # # # # #");
		
	}
	public static void main(String[] args) {
		login();
	}
}