<?php

// Q. If New User Registered Put Notification on admin side in Employee Management

// 1. Create Notification Class:

php artisan make:notification NewUserRegisteredNotification

// 2. Define Notification Content:
    // Customize the notification content in the toMail method of the notification class. You can specify the email subject, message, and any other relevant information.

    // 3. Fire Event on User Registration:

    use App\Events\NewUserRegistered;

// Inside your user registration method
event(new NewUserRegistered($user));

// 4. Create Event Listener:

php artisan make:listener SendNewUserNotificationToAdmin --event=NewUserRegistered

// 5. Handle Notification in Event Listener:

use App\Notifications\NewUserRegisteredNotification;

public function handle(NewUserRegistered $event)
{
    $admin = User::where('role', 'admin')->first();
    $admin->notify(new NewUserRegisteredNotification($event->user));
}


?>