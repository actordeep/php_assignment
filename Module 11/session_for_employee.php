<?php

// Q. Do Session for Employee Management System. 

// 1. Start Session:
// Ensure that sessions are started automatically for each request. Laravel handles this by default, so you don't need to do anything special to start sessions.

// 2. Store Data in Session:
// You can store employee-related data in the session when needed. For example, after a user logs in, you might store their employee ID in the session to identify them throughout their session.

// Storing employee ID in session after login
session(['employee_id' => $employee->id]);


// 3. Retrieve Data from Session:
// You can retrieve employee-related data from the session whenever required, such as when displaying employee information or performing actions on behalf of the logged-in employee.

// Retrieving employee ID from session
$employeeId = session('employee_id');

// 4. Remove Data from Session:
// If needed, you can remove employee-related data from the session, for example, when the user logs out.

// Removing employee ID from session after logout
session()->forget('employee_id');

// 5. Session Flash Data:
// You can also use flash data to temporarily store data in the session for the next request only. This is useful for displaying messages to the user, such as success messages after performing an action.

// Storing a flash message in the session
session()->flash('success_message', 'Employee record updated successfully.');

// To retrieve flash data in the next request:

// Retrieving flash message from the session
$successMessage = session('success_message');


?>