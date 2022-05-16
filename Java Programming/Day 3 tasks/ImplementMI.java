interface Dog{
    void bark();
}

interface Cat {
    void meow();
}


class Pet implements Dog,Cat{
    public void bark(){
        System.out.println("Dog barking");
    }
    public void meow(){
        System.out.println("meow....");
    }
}

public class ImplementMI {
    public static void main(String[] args) {
        Pet d = new Pet();
        d.meow();
        d.bark();
        
    }
}
