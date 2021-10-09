import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MyFrame extends JFrame implements ActionListener
{
    JButton button;
    JLabel label;

    public MyFrame() {
        button = new JButton();
        ImageIcon icon = new ImageIcon(new ImageIcon("buttons/src/ferrari.jpg").getImage().getScaledInstance(100,100, Image.SCALE_DEFAULT));
        ImageIcon image = new ImageIcon(new ImageIcon("buttons/src/dude.jpg").getImage().getScaledInstance(100,100,Image.SCALE_DEFAULT));
        label = new JLabel();


        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);                //specificam ce se intampla cand se apasa butonul x din frame
        this.setLayout(null);                                               //specificam ca nu folosim layout manager
        this.setSize(500, 500);                                 //se seteaza marimea frame ului
        this.setVisible(true);                                              //se face vizibil frame ul
        this.add(button);                                                   //adaugam butonul la frame
        this.add(label);



        button.setBounds(100, 100, 250, 200);             //ii specificam zona in frame unde sa se afle
        button.addActionListener(this);                                  //am adaugat action listener ul ca sa se si intample afisarea de mesaje in consola la apasarea butonului
        button.setText("sunt un buton : Apasa");                            //se seteaza textul butonului
        button.setFocusable(false);                                         //cand adaugam scris o sa se vada o margine langa..cu comanda asta se scoate acea margine
        button.setIcon(icon);                                               //se adauga poza la buton
        button.setHorizontalTextPosition(JButton.CENTER);                   //se seteaza pozitia  textului in raport cu poza pe axa orizontala
        button.setVerticalTextPosition(JButton.BOTTOM);                     //se seteaza pozitia textului in raport cu poza pe axa verticala
        button.setFont(new Font("Comic Sans",Font.BOLD,15));      //se seteaza fontul si marimea lui
        button.setIconTextGap(2);                                           //se seteaza distanta dintre scris si poza
        button.setForeground(Color.red);                                    //se seteaza culoarea fontului
        button.setBackground(Color.BLACK);                                  //se adauga o culoare de background
        button.setBorder(BorderFactory.createEtchedBorder());               //se adauga un border
        //button.setEnabled(false);                                           //dezactiveaza butonul....el tot apare dar nu poti apasa pe el




        label.setIcon(image);
        label.setBounds(180,250,250,250);
        label.setVisible(false);



    }
        @Override
        public void actionPerformed(ActionEvent e)
        {
            if(e.getSource() == button)
            {
                //System.out.println("ferrari");
                //button.setEnabled(false);                                   //daca folosim asta dupa o apasare de buton o sa il transforme in buton dezactivat
                label.setVisible(true);



            }
        }



}
