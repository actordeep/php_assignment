<?php
// Q. Do pagination for Employee Management System

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use App\Models\Employee;

class EmployeeController extends Controller
{
    public function index()
    {
        $employees = Employee::paginate(10); // 10 employees per page
        return view('employees.index', ['employees' => $employees]);
    }
}

?>

<!-- blade file code -->

<!-- employees/index.blade.php -->

<h1>Employee Management</h1>

<table>
    <thead>
        <tr>
            <th>Name</th>
            <th>Email</th>
            <th>Department</th>
        </tr>
    </thead>
    <tbody>
        @foreach ($employees as $employee)
            <tr>
                <td>{{ $employee->name }}</td>
                <td>{{ $employee->email }}</td>
                <td>{{ $employee->department }}</td>
            </tr>
        @endforeach
    </tbody>
</table>

{{ $employees->links() }}
