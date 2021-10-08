package package2;
import package1.*;


public class C
{
    public String publicMessage = "this is public";//este vizibil pentru toate clasele si packageurile din proiect
           String defaultMessage = "this is the default message";//este vizibil numai pentru clasele din acelasi package
    protected String protectedMessage = "this is protected";//poate sa fie accesat si din alte clase sau alte package atata timp cat se afla in acelasi
                                                            //proiect...si ca sa putem accesa mesajul trebuie ca clasa in care vrem sa il folosim sa fie
                                                            //sa fie o subclasa a clasei in care a fost creat
    private String privateMessage = "this is private";//este accesibil numai pentru clasa in care a fost creat
}
//daca folosim numai class C fara public...clasa poate sa fie utilizata numai de alte clase din acelasi package