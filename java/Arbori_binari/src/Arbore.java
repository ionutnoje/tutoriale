import org.w3c.dom.Node;

import java.util.LinkedList;
import java.util.Queue;

public class Arbore
{

        Nod root;

    private Nod addRecursive(Nod current, int value) {
        if (current == null) {
            return new Nod(value);
        }

        if (value < current.value) {
            current.left = addRecursive(current.left, value);
        } else if (value > current.value) {
            current.right = addRecursive(current.right, value);
        } else {
            // value already exists
            return current;
        }

        return current;
    }


    public void add(int value) {
        root = addRecursive(root, value);
    }

    private boolean containsNodeRecursive(Nod current, int value) {
        if (current == null) {
            return false;
        }
        if (value == current.value) {
            return true;
        }
        return value < current.value
                ? containsNodeRecursive(current.left, value)
                : containsNodeRecursive(current.right, value);
    }


    public boolean containsNode(int value) {
        return containsNodeRecursive(root, value);
    }


//    private Nod deleteRecursive(Nod current, int value) {
//        if (current == null) {
//            return null;
//        }
//
//        if (value == current.value) {
//            current = null;
//        }
//        if (value < current.value) {
//            current.left = deleteRecursive(current.left, value);
//            return current;
//        }
//        current.right = deleteRecursive(current.right, value);
//        return current;
//    }

    public void traverseInOrder(Nod node) {
        if (node != null) {
            traverseInOrder(node.left);
            System.out.print(" " + node.value);
            traverseInOrder(node.right);
        }
    }


    public void traversePreOrder(Nod node) {
        if (node != null) {
            System.out.print(" " + node.value);
            traversePreOrder(node.left);
            traversePreOrder(node.right);
        }
    }

    public void traversePostOrder(Nod node) {
        if (node != null) {
            traversePostOrder(node.left);
            traversePostOrder(node.right);
            System.out.print(" " + node.value);
        }
    }

    public void traverseLevelOrder() {
        if (root == null) {
            return;
        }

        Queue<Nod> nodes = new LinkedList<>();
        nodes.add(root);

        while (!nodes.isEmpty()) {

            Nod node = nodes.remove();

            System.out.print(" " + node.value);

            if (node.left != null) {
                nodes.add(node.left);
            }

            if (node.right != null) {
                nodes.add(node.right);
            }
        }
    }

}
