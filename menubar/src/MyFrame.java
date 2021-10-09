import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;

public class MyFrame extends JFrame implements ActionListener
{

    JMenuBar menuBar = new JMenuBar();
    JMenu fileMenu = new JMenu("file");
    JMenu editMenu = new JMenu("Edit");
    JMenu helpMenu = new JMenu("Help");

    JMenuItem loadItem = new JMenuItem("load");
    JMenuItem saveItem = new JMenuItem("save");
    JMenuItem exitItem = new JMenuItem("exit");


    ImageIcon loadIcon;
    ImageIcon saveIcon;
    ImageIcon exitIcon;


    public MyFrame()
    {
        loadIcon = new ImageIcon(new ImageIcon("menubar/src/load.png").getImage().getScaledInstance(15,15,Image.SCALE_DEFAULT));
        saveIcon = new ImageIcon(new ImageIcon("menubar/src/save.png").getImage().getScaledInstance(15,15,Image.SCALE_DEFAULT));
        exitIcon = new ImageIcon(new ImageIcon("menubar/src/exit.png").getImage().getScaledInstance(15,15,Image.SCALE_DEFAULT));


        //keyboard shortcuts
        loadItem.setMnemonic(KeyEvent.VK_L);// l for load
        saveItem.setMnemonic(KeyEvent.VK_S);//s for save
        exitItem.setMnemonic(KeyEvent.VK_X);//x for exit

        fileMenu.setMnemonic(KeyEvent.VK_F);//Alt + f  for filemenu
        editMenu.setMnemonic(KeyEvent.VK_E);//Alt + e  for editmenu
        helpMenu.setMnemonic(KeyEvent.VK_H);//Alt + h  for helpmenu



        //MENUBAR




        menuBar.add(fileMenu);
        menuBar.add(editMenu);
        menuBar.add(helpMenu);



        fileMenu.add(loadItem);
        fileMenu.add(saveItem);
        fileMenu.add(exitItem);


        loadItem.addActionListener(this);
        saveItem.addActionListener(this);
        exitItem.addActionListener(this);

        loadItem.setIcon(loadIcon);
        saveItem.setIcon(saveIcon);
        exitItem.setIcon(exitIcon);


        //FRAME

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(500,500);
        this.setLayout(new FlowLayout());


        this.setJMenuBar(menuBar);


        this.setVisible(true);

    }




    @Override
    public void actionPerformed(ActionEvent e) {

        if(e.getSource() == loadItem)
        {
            System.out.println("you loaded a file");
        }
        else if(e.getSource() == saveItem)
        {
            System.out.println("you saved a file");
        }
        else if(e.getSource() == exitItem)
        {
            System.out.println("you want to exit");
            System.exit(0);
        }
    }
}
