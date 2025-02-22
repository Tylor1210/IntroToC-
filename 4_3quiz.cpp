//Goal: Execute multiple lines of code conditionally

//Assignment: In a mobile health app that tracks the daily water intake of its users, the users are encouraged to reach a daily goal of water consumption for better hydration.
// The user's current water intake is stored in an integer variable currentIntake, measured in milliliters. If the user reaches the goal, the app awards points to their health score (stored in the variable healthScore) and displays a motivational message. 
//In addition to this, the app also tracks how many days a user has hit their goal in the variable daysHitGoal.

if (currentIntake > 2000)
{
    healthScore += 5;
    daysHitGoal +=1;
    cout << "Congratulations! You reached your daily goal!";
}