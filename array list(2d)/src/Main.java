import java.util.*;

public class Main
{
    public static void main(String[] args) {

        ArrayList<ArrayList<String>> ListaCumparaturi = new ArrayList<>();

        ArrayList<String> bakeryList = new ArrayList<>();
        bakeryList.add("pasta");
        bakeryList.add("paine");
        bakeryList.add("dulciuri");


        ArrayList<String> produseLista = new ArrayList<>();
        produseLista.add("rosii");
        produseLista.add("ceapa");
        produseLista.add("lebenita");


        ArrayList<String> baururaLista = new ArrayList<>();
        baururaLista.add("apa");
        baururaLista.add("suc");
        baururaLista.add("cafea");






        ListaCumparaturi.add(bakeryList);
        ListaCumparaturi.add(produseLista);
        ListaCumparaturi.add(baururaLista);


        System.out.println(ListaCumparaturi.get(0));//afiseaza prima lista
        System.out.println(ListaCumparaturi.get(0).get(1));//afiseaza al doilea element din prima lista


    }
}
