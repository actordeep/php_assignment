<?php
$array_with_duplicates = array("apple", "banana", "cherry", "apple", "banana");

$unique_array = array_unique($array_with_duplicates);

print_r($unique_array);
?>
