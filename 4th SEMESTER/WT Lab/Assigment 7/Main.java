// General package
package General;

public class employee {
    protected int empid;
    private String ename;
    private double basic;

    public employee(int empid, String ename, double basic) {
        this.empid = empid;
        this.ename = ename;
        this.basic = basic;
    }

    public double earnings() {
        double DA = 0.8 * basic;
        double HRA = 0.15 * basic;
        return basic + DA + HRA;
    }
}

// Marketing package
package Marketing;
        import General.employee;

public class sales extends employee {
    public sales(int empid, String ename, double basic) {
        super(empid, ename, basic);
    }

    public double tallowance() {
        double totalEarnings = earnings();
        return 0.05 * totalEarnings;
    }
}

// Main class
public class Main {
    public static void main(String[] args) {
        sales s = new sales(101, "John", 50000);
        double totalEarnings = s.earnings();
        double travelAllowance = s.tallowance();
        System.out.println("Employee ID: " + s.empid);
        System.out.println("Total Earnings: " + totalEarnings);
        System.out.println("Travel Allowance: " + travelAllowance);
    }
}