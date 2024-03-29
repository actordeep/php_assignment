<?php

function calculatePercentageAndGrade($physics, $chemistry, $biology, $mathematics, $computer) {
    $totalMarks = $physics + $chemistry + $biology + $mathematics + $computer;

    $percentage = ($totalMarks / 500) * 100;

    if ($percentage >= 90) {
        $grade = 'A';
    } elseif ($percentage >= 80) {
        $grade = 'B';
    } elseif ($percentage >= 70) {
        $grade = 'C';
    } elseif ($percentage >= 60) {
        $grade = 'D';
    } elseif ($percentage >= 40) {
        $grade = 'E';
    } else {
        $grade = 'F';
    }

    return array('percentage' => $percentage, 'grade' => $grade);
}

$physics = 85;
$chemistry = 90;
$biology = 75;
$mathematics = 80;
$computer = 95;

$result = calculatePercentageAndGrade($physics, $chemistry, $biology, $mathematics, $computer);

echo "Percentage: " . $result['percentage'] . "%\n";
echo "Grade: " . $result['grade'] . "\n";

function findThursdayInWeek($day) {
    switch ($day) {
        case 'Monday':
            echo "Thursday is not in this week.";
            break;
        case 'Tuesday':
            echo "Thursday is not in this week.";
            break;
        case 'Wednesday':
            echo "Thursday is not in this week.";
            break;
        case 'Thursday':
            echo "Yes, Thursday is in this week!";
            break;
        case 'Friday':
            echo "Thursday is not in this week.";
            break;
        case 'Saturday':
            echo "Thursday is not in this week.";
            break;
        case 'Sunday':
            echo "Thursday is not in this week.";
            break;
        default:
            echo "Invalid day input.";
    }
}

$day = 'Monday';
findThursdayInWeek($day);

?>
