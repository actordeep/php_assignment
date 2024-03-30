<?php
$original_array = array("apple", "banana", "cherry", "orange", "pear");

$random_key = array_rand($original_array);
$random_value = $original_array[$random_key];
echo "Random value: $random_value\n";

$random_keys = array_rand($original_array, 2);
foreach ($random_keys as $key) {
    $random_value = $original_array[$key];
    echo "Random value: $random_value\n";
}
?>
