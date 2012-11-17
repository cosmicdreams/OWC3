<?php
/**
 * @file
 * jj_user_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function jj_user_profile_taxonomy_default_vocabularies() {
  return array(
    'user_self_description' => array(
      'name' => 'User Self Description',
      'machine_name' => 'user_self_description',
      'description' => 'Ways users describe themselves within JJ\'s list.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
