// ⏳ The Hourglass of Dreams - JavaScript Version
const readline = require('readline');


const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

//first messages
console.log("...the dream starts...\n");
console.log("You have come to see the Hourglass of Dreams seeking wisdom on how to achieve mastery of a skill.\n");

//get the user input about the skill they want to master, the days per week and the hours per day they will dedicate to it
// Then, store all of that in variables
rl.question("The Hourglass asks you: 'What skill do you want to master?'\nYou: I want to master the skill of: ", (dream) => {
  rl.question("The living sands ask you for a number: 'How many days per week will you work on this dream?'\nYou: ", (daysInput) => {
    rl.question("The final question from the arcane device: 'How many hours per day will you dedicate to it?'\nYou: ", (hoursInput) => {
      
      //This section is where the Hourglass calculates the time needed to master the skill
      const days = parseInt(daysInput);
      const hours = parseInt(hoursInput);
      const weekly_hours = days * hours;
      const total_weeks = 25 / weekly_hours;
      const total_days = total_weeks * 7;
      const total_months = total_weeks / 4.345; // Average weeks per month

      //Now, we print the results to the user
      console.log("\nThe Hourglass of Dreams has calculated your goal through the magic of invisible numbers and intangible seconds. Now you will receive the answer you seek.");
      console.log(`\nTo become good enough with ${dream}, you will need to dedicate:`);
      console.log(`\n${Math.round(total_days)} days`);
      console.log(`≈ ${total_weeks.toFixed(1)} weeks`);
      console.log(`≈ ${total_months.toFixed(1)} months\n`);
      console.log(`By the end of this time, you will be good enough at it IF you practice ${hours} hours a day for ${days} days each week.`);
      console.log("You won't become the best in the world, but you will be average at it, which is a good start, above most people, and you won't be a beginner anymore.\n");
      console.log("Remember: 'The main barrier is not intellectual, it's emotional' - Josh Kaufman\n");
      console.log("The Hourglass of Dreams wishes you good luck and hard work on your journey to mastery.\n");
      console.log("End of the dream.");

      rl.close();
    });
  });
});


/*
This was based on a TedTalk by Josh Kaufman, who said that it takes 20 hours to learn a new skill and become average at it.
I also noticed that most courses on 3D softwares, game development and programming also has a duration of 20-30 hours.
Because of that, I decided to use 25 hours as a base for this calculation. 
Wanna learn something new and get good enough at it? 25 hours is a good number to start with.
Wanna become pro? 50-100 hours is a good reference.
Wanna be the best in the world, the ultimate master? Then you use the famous 10,000 hours rule.
But don't forget that you DON'T NEED 10 thousand hours to be happy with your skill and find a job with it.
*/
