<?php
/* config.inc Configuration for oAuth Demo project
 *
 * Katy Nicholson, last updated 17/11/2021
 *
 * https://github.com/CoasterKaty
 * https://katytech.blog/
 * https://twitter.com/coaster_katy
 *
 

***RENAME TO config.inc ***

*/
// MySQL connection details
define('_MYSQL_HOST', 'ventel-server2.mysql.database.azure.com');
define('_MYSQL_USER', 'xxpwvapwhx');
define('_MYSQL_DB', 'aventel-database');
define('_MYSQL_PASS', 'Cheyenne11_11');


// oAuth details



// TENANTID: Your tenant's ID if you set up the app reg as single tenant, otherwise 'common'

//Scope needs to include the services you wish to access - at a minimum you'll need openid and offline_access for logging on to work. Add in user.read if you want to query user profile via Graph. Separate with %20.

define('_OAUTH_TENANTID', '2574baa1-4271-4e03-bdf6-02e645ef4e6f');
define('_OAUTH_CLIENTID', 'af2ae634-aa82-49e4-aadc-af6c211b8e4a');
define('_OAUTH_LOGOUT', 'https://login.microsoftonline.com/common/wsfederation?wa=wsignout1.0');
define('_OAUTH_SCOPE', 'openid%20offline_access%20profile%20user.read');

// Define either the client secret, or the client certificate details
// method = 'certificate' or 'secret'

define('_OAUTH_METHOD', 'secret');

define('_OAUTH_SECRET', 'd8e8Q~HBMlI.2YUrQSP8qyyTFzu2F7WCeABIHa0o');
define('_OAUTH_AUTH_CERTFILE', '/path/to/certificate.crt');
define('_OAUTH_AUTH_KEYFILE', '/path/to/privatekey.pem');

// on Windows, the certificate paths should be in the form c:/path/to/cert.crt


// URL to this website, no trailing slash.
define('_URL', 'https://phpauth.azurewebsites.net');
?>

