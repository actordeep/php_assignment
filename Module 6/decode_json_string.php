<?php
$json_string = '{
    "name": "John",
    "age": 30,
    "city": "New York"
}';

$array_from_json = json_decode($json_string, true);

print_r($array_from_json);
?>
