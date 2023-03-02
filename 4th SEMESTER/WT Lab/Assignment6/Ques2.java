class Animal {
    public void makeSound() {
        System.out.println("The animal makes a sound");
    }
}

class Dog extends Animal {
    @Override
    public void makeSound() {
        super.makeSound();
        System.out.println("The dog barks");
    }

    public void printSound() {
        this.makeSound();
    }
}

public class Ques2 {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.printSound();
    }
}