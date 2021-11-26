import javax.swing.*;

public class Main
{
    public static void main(String[] args) {

        String name = JOptionPane.showInputDialog("enter your name: ");
        JOptionPane.showMessageDialog(null,"hello" + name);


        //JOptionPane.showInputDialog("enter your age: ")  returneaza un string si daca vrem sa introducem varsta
        //trebuie sa 'castam in int' cu Integer.parseInt
        int age = Integer.parseInt(JOptionPane.showInputDialog("enter your age: "));
        JOptionPane.showMessageDialog(null,"you are " + age + " years old");


        double height = Double.parseDouble(JOptionPane.showInputDialog("enter your height: "));
        JOptionPane.showMessageDialog(null,"you are " + height + " cm tall");









    }


    }




