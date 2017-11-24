class LinkedList
{
	Node head;  //head of the list

	static class Node
	{
		int data; 
		Node next; // It is an object & //next is by default initialised as null

		// Constructor to create a new node. 
		Node(int d)  
		{
			data = d;
		}
	}

	public void printlist()
	{
		Node n = head;
		while(n!=null)
		{
			System.out.println(n.data);
			n = n.next;
		}
	}

	public static void main(String[] args) 
	{
		LinkedList l1 = new LinkedList();
		l1.head = new Node(1); // Object of class Node. 
		Node second = new Node(2); // Object of class Node. 
		Node third = new Node(3);	
		l1.head.next = second;
		second.next = third;
		third.next = null;
		l1.printlist();
	}
}