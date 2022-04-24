class ElectronicsShop{
	
	void getFeature() {
		System.out.println("* Low Cost\n* Discount upto 15%\n* EMI options Available");
	}
}

class SmartPhone extends ElectronicsShop{
	
	float price = 10000.0f;
	float protectorGlass = 200.0f;

	@Override
	void getFeature() {
		System.out.println("# # # # # SMART PHONE # # # # #");
		System.out.println("Model Name : XIAOMI REDMI NOTE 12 PRO");
		System.out.println("RAM : 8GB");
		System.out.println("ROM : 128GB");
		System.out.println("Releasing Year : 2023");
		System.out.println("# # # # # # # # # # # # # # # #");
		
	}
	float getPrice() {
		return price;
	}
	float getPrice(boolean wanted) {
		if(wanted)
			return price + protectorGlass;
		return getPrice();
		
	}
}


public class StaticAndDynamicBinding {

	public static void main(String[] args) {
		
		ElectronicsShop e = new  ElectronicsShop();
		e.getFeature();
		System.out.println("\n\n");
		SmartPhone s = new  SmartPhone();
		s.getFeature();
		System.out.println("\n\n");
		System.out.println(s.getPrice());
		System.out.println(s.getPrice(true));
	}
}