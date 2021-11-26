public class Car
{
    private String make;
    private String model;
    private int year;

    public Car(String make, String model, int year)
    {
//        this.make = make;
//        this.model = model; //putem sa lasam asa sau daca tot avem gettere si settere putem sa folosim direct settere
//        this.year = year;

        this.setMake(make);
        this.setModel(model);
        this.setYear(year);

    }

    public Car(Car x) //copyconstructer...cu el o sa copiem informatia de la prima masina si o sa o atribuim la a doua masina cand instantiem al doilea obiect
    {
        this.copy(x);
    }



    public String getMake()
    {
        return make;
    }

    public void setMake(String make)
    {
        this.make = make;
    }


    public String getModel()
    {
        return model;
    }

    public void setModel(String model)
    {
        this.model = model;
    }


    public int getYear()
    {
        return year;
    }

    public void setYear(int year)
    {
        this.year = year;
    }


    public void copy(Car x)
    {
        this.setMake(x.getMake());
        this.setModel(x.getModel());
        this.setYear(x.getYear());
    }



}
