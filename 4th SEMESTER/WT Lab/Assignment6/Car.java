
//ques 3
public class Car {
    private int speed;
    private String engineType;

    public Car(int speed, String engineType) {
        this.speed = speed;
        this.engineType = engineType;
    }

    public void getSpeed(int speed) {
        this.speed = speed;
    }

    public int setSpeed() {
        return speed;
    }

    public void getEngineType(String engineType) {
        this.engineType = engineType;
    }

    public String setEngineType() {
        return engineType;
    }

    public class Honda extends Car {
        public Honda(int speed, String engineType) {
            super(speed ,engineType);
    }
  }
    public class Ford extends Car {
        public Ford(int speed , String engineType){
            super(speed,engineType);
        }
    }
}
