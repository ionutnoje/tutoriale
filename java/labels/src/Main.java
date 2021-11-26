import javax.swing.*;
import javax.swing.border.Border;
import java.awt.*;

public class Main
{
    public static void main(String[] args) {

        // JLabel = a GUI display area for a string of text, an image, or both

        JLabel label = new JLabel();//create a label
        JFrame frame  = new JFrame();//create a frame
        ImageIcon image = new ImageIcon(new ImageIcon("labels/src/dude.jpg").getImage().getScaledInstance(200,200,Image.SCALE_DEFAULT));
        Border border = BorderFactory.createLineBorder(Color.GREEN,3);


        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//cand apesi x pe fereastra se inchide si programul
        frame.setSize(500,500);//cat de mare sa fie frame ul
        frame.setResizable(false);//nu poate sa o maresti sau micsorezi cu mouse ul dintr o muchie
        frame.setVisible(true);//ca sa apara pe ecran frame ul



        label.setText("bro, do you even code?");//set text of label
        frame.add(label);//se adauga label ul pe frame
        label.setIcon(image);//se adauga o poza la label
        label.setHorizontalTextPosition(JLabel.CENTER);//din cauza ca am adaugat poza..scrisul o sa fie in stanga pozei
                                                        //si daca setam ca textul sa fie in centru o sa vina peset poza
                                                        //se poate seta pe stanga, centru si dreapta

        label.setVerticalTextPosition(JLabel.TOP);//seteaza scrisul sus,dedesupt,centru in raport cu poza
        //label.setForeground(Color.GREEN);//setam culoarea fontului
        label.setForeground(Color.green);//setarea culorii fontului cu gradient rgb
        //label.setForeground(new Color(0x00FF00));//setarea culorii fontului cu hexa

        label.setFont(new Font("MV Boli",Font.PLAIN,20));//setam tipul de font si marimea
        label.setIconTextGap(0);//seteaza distanta dintre poza si scris
        label.setBackground(Color.black);//seteaza culoarea de background a labelului
        label.setOpaque(true);//afiseaza culoarea de background
        label.setBorder(border);//ataseaza borderul la label
        label.setVerticalAlignment(JLabel.CENTER);//muta cu totul pozitia labelului in frame(poza + scris) pe verticala
        label.setHorizontalAlignment(JLabel.CENTER);//muta cu totul pozitia labelului in frame(poza + scris) pe orizontala



        //ca sa setam cat spatiu sa ia label ul din frame...pentru ca inca nu am ajuns la
        //layout manager....o sa il setam pe null

        //frame.setLayout(null);//nu o sa apara nimic pe ecran deoarece inca nu am specificat
                            // unde pe ecran sa apara label ul in raport cu frame ul

        //label.setBounds(100,100,250,250); // setam coordonatele label ului(x,y,lungime,latime)


        //folosirea metodei pack...ca sa folosim asta trebuie pus in comentariu label.setBounds si frame.setLayout


        frame.pack();//cand folosim asta nici nu mai trebuie sa setam marimea frameului
                    //deoarece o sa o faca automat pack in functie de ce avem introdus in frame
                    //metoda pack se foloseste dupa tot ce tine de frame...daca nu nu functioneaza




        //daca avem un singur label o sa ia toata fereastra ca spatiu


    }
}
