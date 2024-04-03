<?php
// Q. Write code for sending email 

// 1. Create Mailable Class:
php artisan make:mail NewUserWelcomeEmail

// 2. Define Email Content:

<?php

namespace App\Mail;

use Illuminate\Bus\Queueable;
use Illuminate\Mail\Mailable;
use Illuminate\Queue\SerializesModels;

class NewUserWelcomeEmail extends Mailable
{
    use Queueable, SerializesModels;

    /**
     * Build the message.
     *
     * @return $this
     */
    public function build()
    {
        return $this->subject('Welcome to Our Website')
                    ->view('emails.new_user_welcome');
    }
}


// 3. Create Email Template:

// 4. Send Email:

use App\Mail\NewUserWelcomeEmail;
use Illuminate\Support\Facades\Mail;

Mail::to($user->email)->send(new NewUserWelcomeEmail());


?>