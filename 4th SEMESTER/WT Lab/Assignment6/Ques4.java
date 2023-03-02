class Ques4 {
    void makesound() {
        System.out.println("Animal is making a sound");
    }
}

class Tiger extends Animal {
    @Override
    void makesound() {
        System.out.println("Tiger is roaring");
    }
}

class Cat extends Animal {
    @Override
    void makesound() {
        System.out.println("Cat is meowing");
    }
}

public class DynamicMethodDispatch {
    public static void main(String[] args) {
        Animal animal = new Animal();
        Tiger Tiger = new Tiger();
        Cat cat = new Cat();

        animal.makeSound();
        Tiger.makesound();
        cat.makesound();


        Animal animalRef;
        animalRef = animal;
        animalRef.makeSound();

        animalRef = Tiger;
        animalRef.makeSound();

        animalRef = cat;
        animalRef.makeSound();
    }
}