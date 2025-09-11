# Lists and Arrays HW
Problem:
Imagine you’re going to watch the latest blockbuster at your favorite cinema. The hall has 5 rows and 5 columns of seats, all initially empty (0). As a ticket booking system developer, your job is to allow users to select a seat by entering a row and column number. Once a seat is booked, it should be marked as 1, indicating it’s occupied.

Test Case:
Input:
Enter row number (0-4): 2
Enter column number (0-4): 3
Do you want to book another seat? (yes/no): yes
Enter row number (0-4): 1
Enter column number (0-4): 1
Do you want to book another seat? (yes/no): no
Expected Output:
Seat booked successfully!
Do you want to book another seat? (yes/no): yes
Seat booked successfully!
Do you want to book another seat? (yes/no): no
Updated Seating Arrangement:
[0, 0, 0, 0, 0]
[0, 1, 0, 0, 0]
[0, 0, 0, 1, 0]
[0, 0, 0, 0, 0]
[0, 0, 0, 0, 0]


Problem: 
Imagine You own a bakery that sells different types of bread. Each row in a 2D list represents daily sales for a specific type of bread, while each column represents different days of the week. You need to calculate the total sales for each bread type and the average daily sales for the entire bakery.

Test Case:
Input:
Enter the number of bread types: 3
Enter the number of days: 4
Enter sales for bread type 1: 5 7 8 6
Enter sales for bread type 2: 3 4 2 5
Enter sales for bread type 3: 9 6 7 8 
Expected Output:
Total sales for each bread: [26, 14, 30]
Average daily sales: [5.66, 5.66, 5.66, 6.33]

