//+++++++++++++++++++++++++++++++++++++++++++++++++
// Title: Project2.cpp
// Course: Computational Problem Solving CPET-121
// Developer: Eloy Ramirez
// Date: Feb 25, 2019
// Description: Tic-Tac-Toe Basic Implementation
//+++++++++++++++++++++++++++++++++++++++++++++++++

#include &lt;iostream&gt;
#include &lt;cstdlib&gt;
#include &lt;ctime&gt;
#include &lt;iomanip&gt;
using namespace std;

char a=&#39;1&#39;,b=&#39;2&#39;,c=&#39;3&#39;,d=&#39;4&#39;,e=&#39;5&#39;,f=&#39;6&#39;,g=&#39;7&#39;,h=&#39;8&#39;,i=&#39;9&#39;; // Global variables
// for the board

//+++++++++++++++++++++++++++++++++
// Function for drawing board with
// player choice
//+++++++++++++++++++++++++++++++++

void board()
{
cout &lt;&lt; &quot;\t Tic Tac Toe\n\n&quot;;

cout &lt;&lt; &quot;User (X) - Computer (O)\n\n&quot;;

cout &lt;&lt; &quot; | | &quot; &lt;&lt; endl;

cout &lt;&lt; &quot; &quot; &lt;&lt; a &lt;&lt; &quot; | &quot; &lt;&lt; b &lt;&lt; &quot; | &quot; &lt;&lt; c &lt;&lt; &quot; &quot; &lt;&lt; endl;
cout &lt;&lt; &quot; | | &quot; &lt;&lt; endl;
cout &lt;&lt; &quot;----- ----- -----&quot; &lt;&lt; endl;
cout &lt;&lt; &quot; | | &quot; &lt;&lt; endl;
cout &lt;&lt; &quot; &quot; &lt;&lt; d &lt;&lt; &quot; | &quot; &lt;&lt; e &lt;&lt; &quot; | &quot; &lt;&lt; f &lt;&lt; &quot; &quot; &lt;&lt; endl;
cout &lt;&lt; &quot; | | &quot; &lt;&lt; endl;
cout &lt;&lt; &quot;----- ----- -----&quot; &lt;&lt; endl;
cout &lt;&lt; &quot; | | &quot; &lt;&lt; endl;
cout &lt;&lt; &quot; &quot; &lt;&lt; g &lt;&lt; &quot; | &quot; &lt;&lt; h &lt;&lt; &quot; | &quot; &lt;&lt; i &lt;&lt; &quot; &quot; &lt;&lt; endl;
cout &lt;&lt; &quot; | | \n&quot;;

return;
}

//+++++++++++++++++++++++++++++++++
// Function for checking if choice
// is within valid range
//+++++++++++++++++++++++++++++++++

int validity_check(int&amp; choice)
{
if (choice &lt; 1 || choice &gt; 9) // If the player chooses a number smaller
// than 1 or larger than 9, the console
// outputs &quot;invalid...&quot;
{
cout &lt;&lt; &quot;Invalid input: the position indicator has to be in the range &quot;
&quot;of 1 to 9&quot; &lt;&lt; endl;
}
return (choice);
}

//+++++++++++++++++++++++++++++++++++
// Function for checking if position
// chosen is not occupied

//+++++++++++++++++++++++++++++++++++

//++++++++++++
// User input
//++++++++++++

int user_turn(int&amp; choice)
{
bool done = false;

do
{
switch(choice)
{
case 1:
{
if (choice == 1 &amp;&amp; a == &#39;1&#39;) /* If the player chooses 1 and its
* not occupied then it gets
* replaced by an &#39;X&#39;*/
{
a = &#39;X&#39;;
done = true;
}
else
{
cout &lt;&lt; &quot;Invalid input: Position already occupied.&quot; &lt;&lt; endl;
}
break;
}
case 2:
{
if (choice == 2 &amp;&amp; b == &#39;2&#39;) /* If the player chooses 2 and its
* not occupied then it gets
* replaced by an &#39;X&#39;*/

{
b = &#39;X&#39;;
done = true;
}
else
{
cout &lt;&lt; &quot;Invalid input: Position already occupied.&quot; &lt;&lt; endl;
}
break;
}
case 3:
{
if (choice == 3 &amp;&amp; c == &#39;3&#39;) /* If the player chooses 3 and its
* not occupied then it gets
* replaced by an &#39;X&#39;*/
{
c = &#39;X&#39;;
done = true;
}
else
{
cout &lt;&lt; &quot;Invalid input: Position already occupied.&quot; &lt;&lt; endl;
}
break;
}
case 4:
{
if (choice == 4 &amp;&amp; d == &#39;4&#39;) /* If the player chooses 4 and its
* not occupied then it gets
* replaced by an &#39;X&#39;*/
{
d = &#39;X&#39;;
done = true;
}

else
{
cout &lt;&lt; &quot;Invalid input: Position already occupied.&quot; &lt;&lt; endl;
}
break;
}
case 5:
{
if (choice == 5 &amp;&amp; e == &#39;5&#39;) /* If the player chooses 5 and its
* not occupied then it gets
* replaced by an &#39;X&#39;*/
{
e = &#39;X&#39;;
done = true;
}
else
{
cout &lt;&lt; &quot;Invalid input: Position already occupied.&quot; &lt;&lt; endl;
}
break;
}
case 6:
{
if (choice == 6 &amp;&amp; f == &#39;6&#39;) /* If the player chooses 6 and its
* not occupied then it gets
* replaced by an &#39;X&#39;*/
{
f = &#39;X&#39;;
done = true;
}
else
{
cout &lt;&lt; &quot;Invalid input: Position already occupied.&quot; &lt;&lt; endl;
}

break;
}
case 7:
{
if (choice == 7 &amp;&amp; g == &#39;7&#39;) /* If the player chooses 7 and its
* not occupied then it gets
* replaced by an &#39;X&#39;*/
{
g = &#39;X&#39;;
done = true;
}
else
{
cout &lt;&lt; &quot;Invalid input: Position already occupied.&quot; &lt;&lt; endl;
}
break;
}
case 8:
{
if (choice == 8 &amp;&amp; h == &#39;8&#39;) /* If the player chooses 8 and its
* not occupied then it gets
* replaced by an &#39;X&#39;*/
{
h = &#39;X&#39;;
done = true;
}
else
{
cout &lt;&lt; &quot;Invalid input: Position already occupied.&quot; &lt;&lt; endl;
}
break;
}
case 9:
{

if (choice == 9 &amp;&amp; i == &#39;9&#39;) /* If the player chooses 9 and its
* not occupied then it gets
* replaced by an &#39;X&#39;*/
{
i = &#39;X&#39;;
done = true;
}
else
{
cout &lt;&lt; &quot;Invalid input: Position already occupied.&quot; &lt;&lt; endl;
}
break;
}
}
if (done == false)
{
cout &lt;&lt; &quot;Enter your position: &quot;; cin &gt;&gt; choice; /* Player enters
* the place it
* wants to mark */
}
}
while(done == false);

return(choice);
}

//++++++++++++++++
// Computer input
//++++++++++++++++

int computer_turn(int&amp; cpu_choice)
{
bool done = false;

do
{
cpu_choice = (rand()%9)+1; /* Random number generator from 1 - 9 */

switch(cpu_choice)
{
case 1:
{
if (cpu_choice == 1 &amp;&amp; a == &#39;1&#39;) /* If the RNG chooses 1 and
* its not occupied then it
* gets replaced by an &#39;O&#39; */
{
a = &#39;O&#39;;
done = true;
}
break;
}
case 2:
{
if (cpu_choice == 2 &amp;&amp; b == &#39;2&#39;) /* If the RNG chooses 2 and
* its not occupied then it
* gets replaced by an &#39;O&#39; */
{
b = &#39;O&#39;;
done = true;
}
break;
}
case 3:
{
if (cpu_choice == 3 &amp;&amp; c == &#39;3&#39;) /* If the RNG chooses 3 and
* its not occupied then it
* gets replaced by an &#39;O&#39; */
{

c = &#39;O&#39;;
done = true;
}
break;
}
case 4:
{
if (cpu_choice == 4 &amp;&amp; d == &#39;4&#39;) /* If the RNG chooses 4 and
* its not occupied then it
* gets replaced by an &#39;O&#39; */
{
d = &#39;O&#39;;
done = true;
}
break;
}
case 5:
{
if (cpu_choice == 5 &amp;&amp; e == &#39;5&#39;) /* If the RNG chooses 5 and
* its not occupied then it
* gets replaced by an &#39;O&#39; */
{
e = &#39;O&#39;;
done = true;
}
break;
}
case 6:
{
if (cpu_choice == 6 &amp;&amp; f == &#39;6&#39;) /* If the RNG chooses 6 and
* its not occupied then it
* gets replaced by an &#39;O&#39; */
{
f = &#39;O&#39;;

done = true;
}
break;
}
case 7:
{
if (cpu_choice == 7 &amp;&amp; g == &#39;7&#39;) /* If the RNG chooses 7 and
* its not occupied then it
* gets replaced by an &#39;O&#39; */
{
g = &#39;O&#39;;
done = true;
}
break;
}
case 8:
{
if (cpu_choice == 8 &amp;&amp; h == &#39;8&#39;) /* If the RNG chooses 8 and
* its not occupied then it
* gets replaced by an &#39;O&#39; */
{
h = &#39;O&#39;;
done = true;
}
break;
}
case 9:
{
if (cpu_choice == 9 &amp;&amp; i == &#39;9&#39;) /* If the RNG chooses 9 and
* its not occupied then it
* gets replaced by an &#39;O&#39; */
{
i = &#39;O&#39;;
done = true;

}
break;
}
}
}
while(done == false);

return(cpu_choice);
}

//+++++++++++++++++++++++++++++++++
// Function for checking results
// of choices
//+++++++++++++++++++++++++++++++++

bool check_win(bool&amp; end)
{

if (a == &#39;X&#39; &amp;&amp; b == &#39;X&#39; &amp;&amp; c == &#39;X&#39;) /* If spaces 1, 2, &amp; 3 are occupied
* by &#39;X&#39; then the player wins */
{
end = true;
cout &lt;&lt; &quot;Player 1 wins the game!&quot; &lt;&lt; endl;
}
else if (d == &#39;X&#39; &amp;&amp; e == &#39;X&#39; &amp;&amp; f == &#39;X&#39;) /* If spaces 4, 5, &amp; 6 are occupied
* by &#39;X&#39; then the player wins */
{
end = true;
cout &lt;&lt; &quot;Player 1 wins the game!&quot; &lt;&lt; endl;
}
else if (g == &#39;X&#39; &amp;&amp; h == &#39;X&#39; &amp;&amp; i == &#39;X&#39;) /* If spaces 7, 8, &amp; 9 are occupied
* by &#39;X&#39; then the player wins */
{
end = true;

cout &lt;&lt; &quot;Player 1 wins the game!&quot; &lt;&lt; endl;
}
else if (a == &#39;X&#39; &amp;&amp; d == &#39;X&#39; &amp;&amp; g == &#39;X&#39;) /* If spaces 1, 4, &amp; 7 are occupied
* by &#39;X&#39; then the player wins */
{
end = true;
cout &lt;&lt; &quot;Player 1 wins the game!&quot; &lt;&lt; endl;
}
else if (b == &#39;X&#39; &amp;&amp; e ==&#39;X&#39; &amp;&amp; h == &#39;X&#39;) /* If spaces 2, 5, &amp; 8 are occupied
* by &#39;X&#39; then the player wins */
{
end = true;
cout &lt;&lt; &quot;Player 1 wins the game!&quot; &lt;&lt; endl;
}
else if (c == &#39;X&#39; &amp;&amp; f == &#39;X&#39; &amp;&amp; i == &#39;X&#39;) /* If spaces 3, 6, &amp; 9 are occupied
* by &#39;X&#39; then the player wins */
{
end = true;
cout &lt;&lt; &quot;Player 1 wins the game!&quot; &lt;&lt; endl;
}
else if (a == &#39;X&#39; &amp;&amp; e == &#39;X&#39; &amp;&amp; i == &#39;X&#39;) /* If spaces 1, 5, &amp; 9 are occupied
* by &#39;X&#39; then the player wins */
{
end = true;
cout &lt;&lt; &quot;Player 1 wins the game!&quot; &lt;&lt; endl;
}
else if (c == &#39;X&#39; &amp;&amp; e == &#39;X&#39; &amp;&amp; g == &#39;X&#39;) /* If spaces 3, 5, &amp; 7 are occupied
* by &#39;X&#39; then the player wins */
{
end = true;
cout &lt;&lt; &quot;Player 1 wins the game!&quot; &lt;&lt; endl;
}
if (a == &#39;O&#39; &amp;&amp; b == &#39;O&#39; &amp;&amp; c == &#39;O&#39;) /* If spaces 1, 2, &amp; 3 are occupied
* by &#39;O&#39; then the computer wins */

{
end = true;
cout &lt;&lt; &quot;The computer wins the game!&quot; &lt;&lt; endl;
}
else if (d == &#39;O&#39; &amp;&amp; e == &#39;O&#39; &amp;&amp; f == &#39;O&#39;) /* If spaces 4, 5, &amp; 6 are occupied
* by &#39;O&#39; then the computer wins */
{
end = true;
cout &lt;&lt; &quot;The computer wins the game!&quot; &lt;&lt; endl;
}
else if (g == &#39;O&#39; &amp;&amp; h == &#39;O&#39; &amp;&amp; i == &#39;O&#39;) /* If spaces 7, 8, &amp; 9 are occupied
* by &#39;O&#39; then the computer wins */
{
end = true;
cout &lt;&lt; &quot;The computer wins the game!&quot; &lt;&lt; endl;
}
else if (a == &#39;O&#39; &amp;&amp; d == &#39;O&#39; &amp;&amp; g == &#39;O&#39;) /* If spaces 1, 4, &amp; 7 are occupied
* by &#39;O&#39; then the computer wins */
{
end = true;
cout &lt;&lt; &quot;The computer wins the game!&quot; &lt;&lt; endl;
}
else if (b == &#39;O&#39; &amp;&amp; e ==&#39;O&#39; &amp;&amp; h == &#39;O&#39;) /* If spaces 2, 5, &amp; 8 are occupied
* by &#39;O&#39; then the computer wins */
{
end = true;
cout &lt;&lt; &quot;The computer wins the game!&quot; &lt;&lt; endl;
}
else if (c == &#39;O&#39; &amp;&amp; f == &#39;O&#39; &amp;&amp; i == &#39;O&#39;) /* If spaces 3, 6, &amp; 9 are occupied
* by &#39;O&#39; then the computer wins */
{
end = true;
cout &lt;&lt; &quot;The computer wins the game!&quot; &lt;&lt; endl;
}

else if (a == &#39;O&#39; &amp;&amp; e == &#39;O&#39; &amp;&amp; i == &#39;O&#39;) /* If spaces 1, 5, &amp; 9 are occupied
* by &#39;O&#39; then the computer wins */
{
end = true;
cout &lt;&lt; &quot;The computer wins the game!&quot; &lt;&lt; endl;
}
else if (c == &#39;O&#39; &amp;&amp; e == &#39;O&#39; &amp;&amp; g == &#39;O&#39;) /* If spaces 3, 5, &amp; 7 are occupied
* by &#39;O&#39; then the computer wins */
{
end = true;
cout &lt;&lt; &quot;The computer wins the game!&quot; &lt;&lt; endl;
}
return(end);
}

//+++++++++++++++++++++++++++++++++
// Main function for playing game
// &amp; making choices
//+++++++++++++++++++++++++++++++++

int main()
{
int cpu_choice, choice;
bool end = false;
srand(time(NULL)); // RNG seed generator

cout &lt;&lt; &quot;Welcome to the game of Tic Tac Toe.&quot; &lt;&lt; endl;
cout &lt;&lt; &quot;Below you will indicate your position (1 - 9) as shown in the table.\n\n&quot;;

do
{
board(); // Callback to board
cout &lt;&lt; &quot;Enter your position: &quot;;
cin &gt;&gt; choice; // Player picks position

validity_check(choice); // Callback to validity checker
user_turn(choice); // Callback to user turn function
computer_turn(cpu_choice); // Callback to computer turn function
check_win(end); // Callback to function that checks who&#39;s winner
} while (end == false);

return (0);
}
