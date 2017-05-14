package personproject;

public class Person {

    public static int lastId = 0;

    private String name;
    private String gender;
    private String address;
    private int idNumber; //very hidden comment 

    //constructor
    public Person() {
    }

    //constructor
    public Person(String name, String gender, String address) {
        super();
        this.name = name;
        this.gender = gender;
        this.address = address;
        lastId++;
        this.idNumber = lastId;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String toString() {
        return "Person [name=" + name + ", gender=" + gender
                + ", address=" + address + ", idNumber=" + idNumber + "]";
    }
    
    public static int numberOfPeople(){
        return lastId;
    }

}
