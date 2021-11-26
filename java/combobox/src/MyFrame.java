import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MyFrame extends JFrame implements ActionListener
{

    String[] animals = {"dog", "cat", "bird"};//ca sa apara in combobox trebuie sa avem un array de iteme de tip referinta de ex
                                                //daca vrem sa facem unul cu numere intregi trebuie sa folosim Integer, adica tipul referinta a lui int
    JComboBox comboBox;

    public MyFrame()
    {

        //COMBOBOX
        comboBox = new JComboBox(animals);
        comboBox.addActionListener(this);
        //comboBox.setEditable(true);                       //se poate scrie in casuta
        //System.out.println(comboBox.getItemCount());      //returneaza numarul de elemente din combobox
        //comboBox.addItem("horse");                        //adaugam itemul horse... o sa fie introdus la final
        //comboBox.insertItemAt("pig",3);                   //adaugam itemul pig pe indexul 3
        //comboBox.setSelectedIndex(0);                     //cand apare o sa fie deja selectat obiectul de pe indexul 0
        //comboBox.removeItem("cat");                       //stergem cat din combobox
        //comboBox.removeItemAt(0);                         //stergem un element dupa index
        //comboBox.removeAllItems();                        //stergem toate elementele din combobox




        //FRAME

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());
        this.add(comboBox);

        this.pack();
        this.setVisible(true);
    }





@Override
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource() == comboBox)
        {
            System.out.println(comboBox.getSelectedItem());
            //System.out.println(comboBox.getSelectedIndex());
        }
    }

}
