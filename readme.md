Digital Wallet Management System
================================

Project Description
--------

The **Digital Wallet Management System** (DWMS) is an application that enables users to securely store, manage, and use their digital financial assets, such as money, credit/debit card information, and even cryptocurrencies. These systems provide users with the ability to perform various financial transactions electronically, without needing physical cash or cards.


key Features
--------

Key Features
->User Database: Stores a list of users along with their unique identifiers and initial balances.
<br>
->Transaction Handling: Manages fund transfers between users, ensuring secure and successful transactions.
<br>
->Transaction Status Feedback: For every transaction, the system provides instant feedback indicating whether the transaction was successful or failed.
<br>
->Balance Ranking: After processing all transactions, users are sorted based on their remaining balance, and the sorted list is displayed.
<br>
<br>

Constraints
---------------
The number of users N is between 1 and 100.
<br>
Each userID is a unique integer between 1 and 100.
<br>
The initial balance of a user is a non-negative integer, up to 10,000.
<br>
The number of transactions T ranges from 1 to 1000.
<br>
The transaction amount is a non-negative integer, up to 10,000.
<br>
<br>

Input Specifications
-------------------------
The first input line contains an integer `N`, representing the number of users.
<br>
The following N lines each include two integers:`userID` and `balance`. Here, userID is the identifier for the user, and balance is the user’s current balance.
<br>
The next input line contains an integer `T`, indicating the total number of transactions.
<br>
The subsequent T lines each contain three integers: `from_userID`, `to_userID`, and `amount`, where from_userID and to_userID are the identifiers for the users involved in the transaction, and amount is the sum of money being transferred.
<br>
<br>

Output Specifications
-----------------------------
For each transaction:

Print `"Success"` if the transaction is executed without any issues.
<br>
Print `"Failure"` if the transaction could not be processed.
<br>
<br>

Solution Explanation
-----------------------
I solved the program by following these steps:
<br>
*Input Handling:* First, I read the number of users and their initial balances. I stored each user's userID and balance in a vector of pairs called details to manage the user data efficiently.
<br>

*Transaction Processing:* For each transaction, I read the IDs of the sender (id1) and recipient (id2), along with the amount (amt) to be transferred. I then checked if the sender had enough balance to complete the transaction.
<br>

*Balance Update:* If the sender had sufficient funds, I deducted the amount from their balance and added it to the recipient's balance. If the transaction was successful, I printed "Success". Otherwise, I printed "Failure" if the sender's balance was insufficient.
<br>

*Sorting Users:* After processing all transactions, I sorted the details vector based on the remaining balances. In case of a tie in balances, I sorted by userID.
<br>

*Final Output:* Finally, I displayed the sorted list of users, showing their userID and final balance, allowing easy comparison of users' financial statuses after all transactions were completed.
