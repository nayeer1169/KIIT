interface Motor {
    int capacity = 0;
    void run();
    void consume();
}

class ElectricMotor implements Motor {
    int capacity;

    ElectricMotor(int capacity) {
        this.capacity = capacity;
    }
//now we wil write code for 'running electric model'
    @Override
    public void run() {
    }
//now we wil write code for 'consume energy'
    @Override
    public void consume() {
    }
}

public class Ques1 {
    public static void main(String[] args) {
        ElectricMotor m = new ElectricMotor(1500);
        System.out.println("Electric motor capacity: " + m.capacity);
    }
}