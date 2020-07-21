/*Let's begin:
Bribing the person in front of you is the only way to go forward. Take note of this point.
Instances of numbers greater than you in front of you = Bribe count

Do we really have to check everyone in our front?
First, to eliminate the chaotic cases - obviously any person who is more than 2 positions ahead of their initial position cannot be there since they could not have bribed more than twice.

Question to ask yourself: How can I know how many times have I been bribed if I am the one standing in the queue?

Every person with a number greater than me who is now standing ahead of me must have bribed me at some point.

So starting from one position in front of you, check through the row in front of you and count the instances of numbers greater than yours. Hence, Instances of numbers greater than you in front of you = Bribe count.

Final step, notice the inner loop for this condition starts from j=i-2 (1 position in front of you) and goes to either 0 (beginning of queue) or your original position - 1 i.e q[i-1]-2 : whichever is maximum of the two.

Why?

1 2 3 4 5 6 7 8 9 10
1 2 3 5 6 7 8 9 10 4 : 6 bribes
1 2 5 3 6 7 8 9 10 4 : 7 bribes
1 5 2 3 6 7 8 9 10 4 : 8 bribes BUT 5 has now bribed three people - 4,3,2 so this won't happen.
So you only needed to check till one position in front of you.

That will be in this instance q[3] - 2 = 4 -2 = 2 (indexing starting from 0, initial position of 4 is 3)*/

