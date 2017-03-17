<?php
/**
 * @file
 * my_photo_gallery.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function my_photo_gallery_taxonomy_default_vocabularies() {
  return array(
    'photo_categories' => array(
      'name' => 'Photo Categories',
      'machine_name' => 'photo_categories',
      'description' => 'Categories for uploaded photos',
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
